import java.util.Scanner;
import java.util.regex.*;


public class Senha{
   
    public static void main(String[] args) {

        Scanner entrada = new Scanner(System.in);
        String senha;
        System.out.print("Digite a senha: ");
        senha = entrada.next();

        while(validaSenha(senha) == false){
            if(validaSenha(senha)){
                System.out.println(""+ (6 - senha.length()));
                break;
             }else{
                System.out.print("Digite a senha: ");
                senha = entrada.next();
             }
         }
     }

     public static boolean validaSenha(String senha){
        String regex = "^(?=.*[0-9])"
        + "(?=.*[a-z])(?=.*[A-Z])"
        + "(?=.*[@#$%^&+=])"
        + "(?=\\S+$).{6,20}$";

        Pattern p = Pattern.compile(regex);

        if (senha == null) {
            return false;
        }

        Matcher m = p.matcher(senha);

        return m.matches();

     }

    
}
