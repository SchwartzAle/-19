#include <iostream>


class Animal
{
public:
	virtual void Voice() const = 0
	{
		std::cout << "Voice!" << "\n";
	}
};
	//собака
	class Dog : public Animal
	{
	public:
	
		void Voice() const override
		{
			std::cout << "Gav!" << "\n";
		}
	};

	//мышь
	class Mouse : public Animal
	{
	public:

		void Voice() const override
		{
			std::cout << "Pi Pi!" << "\n";
		}
	};
	//кошка
	class Cat : public Animal
	{
	public:

		void Voice() const override
		{
			std::cout << "Meow!" << "\n";
		}
	};

int main()
{
	int size;
	size = 3;
	Dog* A = new Dog;
	Mouse* B = new Mouse;
	Cat* C = new Cat;

	Animal** Array = new Animal * [size] { A, B, C};

	for (int i = 0; i < size; i++)
	{
		
		Array[i]->Voice();
	}
};
