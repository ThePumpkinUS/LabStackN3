#include <string>
#include <iostream>

template <typename T>

class GrandStack
{
public:
	int len;
	T* stack;

	GrandStack() : len(0), stack(nullptr) {}
	GrandStack(int n)
	{
		len = n;
		stack = (T*)malloc(len * sizeof(T));
	}
	GrandStack (const GrandStack& other) // Copy
	{
		if (this->len == other.len)
		{
			stack = (T*)malloc(other.len * sizeof(T));

			for (int i = 0; i < other.len; i++)
				stack[i] = other.stack[i];
		}
		else
		{
			std::cout << "Len is different";
		}
	}
	GrandStack(GrandStack&& other) noexcept: len(other.len), stack(other.stack) //move
	{
		other.len = 0;
		other.stack = nullptr;
	}

	//////////////

	GrandStack& operator=(const GrandStack& other)
	{
		if (this->len == other.len)
		{
			if (this == &other)
				return *this;

			free this->stack;

			len = other.len;
			for (int i = 0; i < other.len; i++)
				stack[i] = other.stack[i];
		}
		else
		{
			std::cout << "Len is different";
		}
	}

	void Push(const T& value)
	{
		
	}

	T Pop()
	{
		return stack[]
	}

	void PolskiList(std::string command)
	{
		for (char c : command)
		{	
			T res;
			switch (c)
			{
				case '+':
					res = Pop() + Pop();
					Push(res);
					break;
				case '-':
					res = Pop() + Pop();
					Push(res);
					break;
				case '*':
					res = Pop() * Pop();
					Push(res);
					break;
				case '/':
					if(Pop() != 0 || Pop() !=0)
					res = Pop() / Pop();
					Push(res);
					break;
			}
		}
	}

	friend std::ostream& operator <<(std::ostream& os, const GrandStack& s)
	{
		os << "\n" << "[ ";
		for (int i = 0; i < s.len; i++)
		{
			os << s.stack[i] << ", ";
		}
		os << "]" << "\n";
		return os;
	}
	

	~GrandStack()
	{
		free(stack);
	}
};
