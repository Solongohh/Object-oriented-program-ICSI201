
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

#include <stdlib.h>
struct coord{
    double x;
    double y;
};
typedef struct coord coord;
class body{
    private:
        char name;
        coord position;
        coord velocity;
        double mass;
        double G;
    public:
        //geter func
        char get_name(){
            return name;
        }
        coord get_position(){
            return position;
        }
        coord get_velocity(){
            return velocity;
        }
        double get_mass(){
            return mass;
        }
        double get_G(){
            return G;
        }

        //seter func
        void set_name(char _name){
            name=_name;
        }
        void set_position(coord pos){
            this->position.x=pos.x;
            this->position.y=pos.y;
        }
        void set_velocity(coord vel){
            this->velocity.x=vel.x;
            this->velocity.y=vel.y;
        }
        void set_mass(double _mass){
            this->mass=_mass;
        }
        void set_G(double _G){
            this->G=_G;
        }

        //funcs
        double Dist(body &b){
            return sqrt(pow(this->velocity.x-b.velocity.x,2)+pow(this->velocity.y-b.velocity.y,2));
        }
        double Force(body &b){
            return G*this->mass*b.mass/pow(this->Dist(b),2);
        }
        coord Sum(body &b,body &c,body &d,body &e,body &f,body &g){
            double F[6];
            coord vec[6];
            double len[6];
            body *a[6];
            a[0]=&b;
            a[1]=&c;
            a[2]=&d;
            a[3]=&e;
            a[4]=&f;
            a[5]=&g;

            for(int i;i<6;i++){
                F[i]=this->Force(*a[i]);
            }
            for(int i=0; i<6; i++){
                len[i] = this->Dist(*a[i]);
            }

            for(int i=0;i<6;i++){
                if(this->mass>a[i]->mass){
                    vec[i].x=0;
                    vec[i].y=0;
                }else{
                    vec[i].x=a[i]->position.x-this->position.x;
                    vec[i].y=a[i]->position.y-this->position.y;
                }
            }

            coord s;
            double x=0;
            double y=0;

            for(int i=0; i<6; i++){
                x += (F[i]/mass)*(vec[i].x/len[i]);
                y += (F[i]/mass)*(vec[i].y/len[i]);
            }
            s.x = x;
            s.y = y;
            return s;
        }
        void change_velo(coord &s);
        void change_pos(){
            position.x += velocity.x;
            position.y += velocity.y;
        }
        void display(){
            cout<<this->name<<" "<<this->position.x<<" "<<this->position.y<<" "<<this->velocity.x<<" "<<this->velocity.y<<" "<<this->mass<<endl;
        }
};
void draw(){
    body a[7];

}
int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
    glutInitWindowSize(640,480);
    glutInitWindowPosition(10,10);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);

    glutCreateWindow("GLUT Shapes");

    glutReshapeFunc(resize);
    glutDisplayFunc(display);
    glutKeyboardFunc(key);
    glutIdleFunc(idle);

    glClearColor(1,1,1,1);
    glEnable(GL_CULL_FACE);
    glCullFace(GL_BACK);

    glEnable(GL_DEPTH_TEST);
    glDepthFunc(GL_LESS);

    glEnable(GL_LIGHT0);
    glEnable(GL_NORMALIZE);
    glEnable(GL_COLOR_MATERIAL);
    glEnable(GL_LIGHTING);

    glLightfv(GL_LIGHT0, GL_AMBIENT,  light_ambient);
    glLightfv(GL_LIGHT0, GL_DIFFUSE,  light_diffuse);
    glLightfv(GL_LIGHT0, GL_SPECULAR, light_specular);
    glLightfv(GL_LIGHT0, GL_POSITION, light_position);

    glMaterialfv(GL_FRONT, GL_AMBIENT,   mat_ambient);
    glMaterialfv(GL_FRONT, GL_DIFFUSE,   mat_diffuse);
    glMaterialfv(GL_FRONT, GL_SPECULAR,  mat_specular);
    glMaterialfv(GL_FRONT, GL_SHININESS, high_shininess);

    glutMainLoop();

    return EXIT_SUCCESS;
}
