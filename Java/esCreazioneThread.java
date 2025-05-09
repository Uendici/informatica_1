class MioThread extends Thread {
    @Override
    public void run() {
        System.out.println("Il thread è in esecuzione!");
        // Codice da eseguire nel thread
    }

    MioThread(string nome) {
        super(nome); // Chiama il costruttore della classe padre Thread
    }   
}
 
class MioRunnable implements Runnable {
    @Override
    public void run() {
        System.out.println("Il thread è in esecuzione!");
        // Codice da eseguire nel thread
    }
}
public class esCreazioneThread {
    public static void main(String[] args) {
        MioThread thread = new MioThread();
        thread.start(); // Avvia il thread
    }
}