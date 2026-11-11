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
		if (this->len = other.len)
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
	GrandStack(GrandStack&& other) noexcept  //Move
	{
		if (this->len = other.len)
		{

			len = other.len;
			for (int i = 0; i < other.len; i++)
				stack[i] = other.stack[i];

			other.len = 0;
			other.stack = nullptr;
		}
		else
		{
			std::cout << "Len is different";
		}
	}

	//////////////

	GrandStack& operator=(const GrandStack& other)
	{
		if (this->len == other.len)
		{
			if (this == &other)
				return *this;

			delete[] this->stack;

			len = other.len;
			for (int i = 0; i < other.len; i++)
				stack[i] = other.stack[i];
		}
		else
		{
			std::cout << "Len is different";
		}
	}

	void StackNum(const T* nums)
	{
		for (int i = 0; i < len; i++)
			stack[i] = nums[i];
	}

	int GetNumIndex(T n)
	{
		for (int i = 0; i < len; i++)
		{
			if(stack[i] == n)
				return i
		}
	}

	int PolskiList()
	{
		//Реализовать при помощи Switch
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
