// Normally I would split these classes into three different files. 
// However, because they will only be a couple of lines each, 
// I will keep them in one file


class Animal {};

class Mouth {};


class Cat : public Animal
{
public:
	Cat() { Mouth m; }
};

int main()
{
	Cat c;
}