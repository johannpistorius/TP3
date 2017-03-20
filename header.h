//exo1
class point{
public:
    point(float newX, float newY);
    void deplace(float addX, float addY);
    void affiche();
private:
    float x,y;
};

//exo2
class set_char{
public:
    set_char();
    void ajouter(char caractere);
    void numElem();
    void testChar(char caractere);
private:
    char car[50];
    int cardinal;
};
//exo3
class point2{
public:
    point2(float newX, float newY, char car);
    float getX();
    float getY();
    void affiche();
    void translation(float addX,float addY);
    void positionner(float newX, float newY);
    void positionner(point2 p);
    point2 milieu(point2 p);
    bool comparer(point2 p);
    point2 symetrique();
    float distance(point2 p);
    void rotation(float angle);
private:
    float x,y;
    char name;
};
