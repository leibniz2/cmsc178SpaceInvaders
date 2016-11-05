#ifndef VECTORCONTAINER_H
#define VECTORCONTAINER_H


class VectorContainer
{
    public:

        vector<Alien> Getaliens() { return aliens; }
        void Setaliens(vector<Alien> val) { aliens = val; }
        vector<Bullet> Getbullets() { return bullets; }
        void Setbullets(vector<Bullet> val) { bullets = val; }

        vector<Alien> aliens;
        vector<Bullet> bullets;

    protected:

    private:
};

#endif // VECTORCONTAINER_H
