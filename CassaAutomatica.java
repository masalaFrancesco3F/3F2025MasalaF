public class Main {
    public static void main(String[] args) {
        CassaAutomatica cassa = new CassaAutomatica();

        cassa.registraPrezzo(2.50);
        cassa.registraPrezzo(1.20);
        cassa.registraPrezzo(4.30);

        System.out.println("Totale spesa: € " + cassa.calcolaTotale());

        double resto = cassa.riceviPagamento(10.00);

        if (resto >= 0) {
            System.out.println("Pagamento riuscito! Resto: € " + resto);
        } else {
            System.out.println("Importo insufficiente!");
        }
    }
}

class CassaAutomatica {
    private double totale;

    public CassaAutomatica() {
        this.totale = 0.0;
    }

    public void registraPrezzo(double prezzo) {
        if (prezzo > 0) {
            this.totale += prezzo;
        }
    }

    public double calcolaTotale() {
        return this.totale;
    }

    public double riceviPagamento(double importo) {
        if (importo >= this.totale) {
            double resto = importo - this.totale;
            this.totale = 0.0;
            return resto;
        } else {
            return -1.0;
        }
    }

    public void nuovaSpesa() {
        this.totale = 0.0;
    }
}