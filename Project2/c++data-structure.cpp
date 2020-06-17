//template <typename T>
//class Sqlist {
//	T* data;
//	int n, capacity;
//public:
//	Sqlist(int cap = 3) {
//		data = new T[cap];
//		if (!data) throw "Ê§°Ü";
//		capacity = cap;
//		n = 0;
//	}
//	bool push_back(T e) {
//		if (n >= capacity) {
//			if (!realloc()) return false;
//		}
//	}
//};