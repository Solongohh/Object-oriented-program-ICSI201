import javax.swing.plaf.synth.SynthSpinnerUI;
import java.util.Scanner;

public class Main {
    public static void main(String[] args){
        Scanner scanner=new Scanner(System.in);
        System.out.print("rows: ");
        int n1= scanner.nextInt();
        System.out.print("columns: ");
        int m1= scanner.nextInt();
        float value1[][]=new float[n1][m1];
        System.out.println("value1[rows][columns]: ");
        for(int i=0;i<n1;i++) {
            for (int j = 0; j < m1; j++) {
                value1[i][j] = scanner.nextFloat();
            }
        }
        float value2[][]=new float[n1][m1];
        System.out.println("value2[rows][columns]: ");
        for(int i=0;i<n1;i++){
            for(int j=0;j<m1;j++){
                value2[i][j]=scanner.nextFloat();
            }
        }
        System.out.printf("value1[%d][%d]: ",n1,m1);
        System.out.println();
        for(int i=0;i<n1;i++){
            for(int j=0;j<m1;j++){
                System.out.print(" "+value1[i][j]);
            }
            System.out.println();
        }
        System.out.printf("value2[%d][%d]: ",n1,m1);
        System.out.println();
        for(int i=0;i<n1;i++){
            for(int j=0;j<m1;j++){
                System.out.print(" "+value2[i][j]);
            }
            System.out.println();
        }
        Matrix a=new Matrix(n1,m1,value1);
        Matrix b=new Matrix(m1,n1,value2);
        System.out.printf("value1[%d][%d]+value2[%d][%d]: \n",n1,m1,n1,m1);
        float plus1[][]=new float[n1][m1];
        float plus2[][]=new float[n1][m1];
        plus1=a.operator_plus(b);
        plus2=a.operator_plus(12);
        for(int i=0;i<n1;i++){
            for(int j=0;j<m1;j++){
                System.out.print(" "+plus1[i][j]);
            }
            System.out.println();
        }
        System.out.printf("value1[%d][%d]+12.5: \n",n1,m1);
        for(int i=0;i<n1;i++){
            for(int j=0;j<m1;j++){
                System.out.print(" "+plus2[i][j]);
            }
            System.out.println();
        }
        System.out.printf("value3[%d][%d]: \n",m1,n1);
        float value3[][]=new float[m1][n1];
        for(int i=0;i<m1;i++){
            for(int j=0;j<n1;j++){
                value3[i][j]=scanner.nextFloat();
            }
        }
        System.out.printf("value3[%d][%d]: \n",n1,m1);
        for(int i=0;i<m1;i++){
            for(int j=0;j<n1;j++){
                System.out.print(" "+value3[i][j]);
            }
            System.out.println();
        }
        Matrix c=new Matrix(m1,n1,value3);
        System.out.printf("value1[%d][%d]*value3[%d][%d]: \n",n1,m1,m1,n1);
        float multiply1[][]=new float[n1][n1];
        multiply1=a.operator_multiply(c);
        for(int i=0;i<n1;i++){
            for(int j=0;j<n1;j++){
                System.out.print(" "+multiply1[i][j]);
            }
            System.out.println();
        }
    }
}
