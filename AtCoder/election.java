// task: https://atcoder.jp/contests/abc231/tasks/abc231_b
import java.util.Scanner;
import java.util.ArrayList;

public class Main {
    public static void main(String[] args) {

        Scanner leitor = new Scanner(System.in);
        ArrayList<String> candidatos;
        ArrayList<String> candidatosTempoReal;

        candidatos = new ArrayList<>();
        candidatosTempoReal = new ArrayList<>();

        int n = leitor.nextInt();
        leitor.nextLine();

        for (int i = 0; i < n; i++) {
            String voto = leitor.next();
            candidatosTempoReal.add(voto);

            boolean validador = true;
            for (int j = 0; j < candidatos.size(); j++) {
                if (voto.equals(candidatos.get(j))) {
                    validador = false;
                    break;
                }
            }
            if (validador) {
                candidatos.add(voto);
            }
        }

        leitor.close();

        int[] pontuacao = new int[candidatos.size()];

        for (int i = 0; i < candidatosTempoReal.size(); i++) {
            for (int j = 0; j < candidatos.size(); j++) {
                if (candidatosTempoReal.get(i).equals(candidatos.get(j))) {
                    pontuacao[j] += 1;
                }
            }
        }

        int maiorIndice = 0;
        int maiorValor = pontuacao[0];
        for (int i = 0; i < pontuacao.length; i++) {
            if (maiorValor < pontuacao[i]) {
                maiorValor = pontuacao[i];
                maiorIndice = i;
            }
        }

        System.out.println(candidatos.get(maiorIndice));
    }
}