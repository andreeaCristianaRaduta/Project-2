#pragma once
#include <vector>

template <class T> 
class Repository {
protected:
	std::vector<T*> mEntities;

public:
	void add(T *ob);
	void remove(T *ob);
	void print();

};

template<class T>
inline void Repository<T>::add(T * ob){

	mEntities.push_back(ob);
}

template<class T>
inline void Repository<T>::remove(T * ob){

	for (unsigned int i = 0; i < mEntities.size(); i++) 
		if (mEntities.at(i) == ob)
			mEntities.erase(mEntities.begin() + i);
}

template<class T>
inline void Repository<T>::print(){

	for (unsigned int i = 0; i < mEntities.size(); i++)
		std::cout << mEntities.at(i) << " ";
	std::cout << '\n';
}
