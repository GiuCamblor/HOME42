#include <unistd.h>


int main(int)
{
    int num;
    num = 0;
    write (1, num, 1);
    return (0);
}