public class Matrix {
    private int m,n;
    private float values[][]=new float[this.n][this.m];

    public Matrix(int n, int m,float values[][]) {
        setM(m);
        setN(n);
        setValues(values);
    }

    public int getM() {
        return m;
    }

    public void setM(int m) {
        this.m = m;
    }

    public int getN() {
        return n;
    }

    public void setN(int n) {
        this.n = n;
    }

    public void setValues(float[][] values) {
        this.values = values;
    }

    public float[][] operator_plus(Matrix b){
        float ret[][]=new float[this.n][this.m];
        for(int i=0;i<getN();i++){
            for(int j=0;j<getM();j++){
                ret[i][j]=this.values[i][j]+b.values[i][j];
            }
        }
        return ret;
    }
    //nemeh operator dahin todorhoilolt
    public float[][] operator_plus(float b){
        float ret[][]=new float[this.n][this.m];
        for(int i=0;i<getN();i++){
            for(int j=0;j<getM();j++){
                ret[i][j]=this.values[i][j]+b;
            }
        }
        return ret;
    }
    //urjih operator dahin todorhoilolt
    public float[][] operator_multiply(Matrix b){
        float ret[][]=new float[this.n][this.n];
        float s=0;
        for(int i=0;i<this.n;i++) {
            for (int j = 0; j < this.n;j++) {
                for(int k=0;k<this.m;k++){
                    s=s+this.values[i][k]*b.values[k][j];
                }
                ret[i][j]=s;
                s=0;
            }
        }
        return ret;
    }
    public float[][] operator_hasah(Matrix b){
        float ret[][]=new float[this.n][this.m];
        for(int i=0;i<getN();i++){
            for(int j=0;j<getM();j++){
                ret[i][j]=this.values[i][j]-b.values[i][j];
            }
        }
        return ret;
    }
    public void operator=(Matrix b){
        for(int i=0;i<getN();i++){
            for(int j=0;j<getM();j++){
                this.values[i][j]=b.values[i][j];
            }
        }
    }
    public void operator++(void){
        for(int i=0;i<getN();i++){
            for(int j=0;j<getM();j++){
                this.values[i][j]+=1;
            }
        }
    }
    public void operator--(void){
        for(int i=0;i<getN();i++){
            for(int j=0;j<getM();j++){
                this.values[i][j]-=1;
            }
        }
    }
    public void operator*=(int a){
        for(int i=0;i<getN();i++){
            for(int j=0;j<getM();j++){
                this.values[i][j]*=a;
            }
        }
    }
}
