#ifndef _body_
#define _body_
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
        char get_name();
        coord get_position();
        coord get_velocity();
        double get_mass();
        double get_G();

        //seter func
        void set_name(char _name);
        void set_position(coord pos);
        void set_velocity(coord vel);
        void set_mass(double _mass);
        void set_G(double _G);

        //funcs
        double Dist(body &b);
        double Force(body &b);
        coord Sum(body &b,body &c,body &d,body &e,body &f,body &g);
        void change_velo(coord &s);
        void change_pos();
        void display();
};
#endif