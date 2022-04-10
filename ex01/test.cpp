#include <string>
#include <iostream>

class A
{
	private:
		std::string name;
		int id;
	public:
		// A(): id(0), name("AA") {}
		A(const std::string& Name = "AA"): id(333), name(Name)
		{
			std::cout << this->name << std::endl;
		}
		~A()
		{
			std::cout << this->name << std::endl;
		}
		void SetName(const std::string& Name)
		{
			this->name = Name; // this - указатель на данный экземпляр класса
		}
		const std::string& GetName() const
		{
			return this->name;
		}
		const int& GetId() const
		{
			return (this->id);
		}
		void SetId(const int& Id)
		{
			this->id = Id;
		}
	protected:
		int counter;
};

int main()
{
	int a;
	std::cin >> a;
	std::cout << a << std::endl;
	std::cin.clear();
	std::cin.ignore();
	std::cin >> a;
	std::cout << a << std::endl;
	return 0;
}
