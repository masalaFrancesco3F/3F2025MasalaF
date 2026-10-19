
class Prodotto {
    private String nome;
    private double prezzo;

    public Prodotto(String nome, double prezzo) {
        this.nome = nome;
        this.prezzo = prezzo;
    }

    public String getNome() {
        return nome;
    }

    public double getPrezzo() {
        return prezzo;
    }
}

class Scomparto {
    private Prodotto prodotto;
    private int quantita;

    public Scomparto(Prodotto prodotto, int quantita) {
        this.prodotto = prodotto;
        this.quantita = quantita;
    }

    public Prodotto getProdotto() {
        return prodotto;
    }

    public int getQuantita() {
        return quantita;
    }

    public boolean disponibile() {
        return quantita > 0;
    }

    public void erogaProdotto() {
    }
}

public class Distributore {
    private Scomparto[] scomparti;
    private double credito;

    public Distributore(int numeroScomparti) {
        scomparti = new Scomparto[numeroScomparti];
        credito = 0;
    }

    public void inserisciCredito(double importo) {
    
    }

    public void selezionaProdotto(int posizione) {
    }

    public double getCredito() {
        return credito;
    }
}