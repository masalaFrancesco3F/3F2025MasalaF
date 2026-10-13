class Persona {
    protected String nome;
    protected int eta;

    public Persona(String nome, int eta) {
        this.nome = nome;
        this.eta = eta;
    }

    public String descrivi() {
        return "Nome: " + nome + ", età: " + eta;
    }
}

class Studente extends Persona {
    private String classe;
    private double media;

    public Studente(String nome, int eta, String classe, double media) {
        super(nome, eta);
        this.classe = classe;
        this.media = media;
    }

    @Override
    public String descrivi() {
        return super.descrivi() + ", classe: " + classe + ", media: " + media;
    }

    public boolean promosso() {
        return media >= 6.0;
    }
}
public class Main {
    public static void main(String[] args) {
        Persona p = new Persona("Mario", 45);
        Studente s1 = new Studente("Anna", 16, "3B", 7.5);
        Studente s2 = new Studente("Luca", 17, "4A", 5.2);

        Persona[] persone = { p, s1, s2 };

        for (Persona persona : persone) {
            System.out.println(persona.descrivi());

            if (persona instanceof Studente) {
                Studente st = (Studente) persona;
                if (st.promosso()) {
                    System.out.println("Esito: Promosso");
                } else {
                    System.out.println("Esito: Non promosso");
                }
            }
        }
    }
}