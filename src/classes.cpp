#include <iostream>

class Player
{
public:
    Player()
    {
    }

private:
    int x;
    int y;
    int speed;

public:
    void move(int xa, int ya)
    {
        x += xa*speed;
        y += ya*speed;
    }

    void setSpeed(int speed)
    {
        this->speed = speed;
    }

    int getSpeed()
    {
        return speed;
    }

    int getX()
    {
        return x;
    }

    int getY()
    {
        return y;
    }
};

int main()
{
    Player player;

    std::cout << "speed: " << player.getSpeed() << std::endl;
    std::cout << "x: " << player.getX() << std::endl;
    std::cout << "y: " << player.getY() << std::endl;
}
