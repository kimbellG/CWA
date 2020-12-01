#pragma once
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <cstring>
#include "SetCheck.h"
using namespace std;

namespace ListNS {
	template<typename T>
	class List
	{
	public:
		List();
		~List();
		void pop_front();
		void push_back(T data);
		void clear();
		int GetSize() { return Size; }
		T& operator[](const int index);
		void push_front(T data);
		void insert(T data, int index);
		void removeAt(int index);
		void pop_back();
		void sort();
		void show_list();
		void file_write(string path);
		
		
	private:
		template<typename T>
		class Node
		{
		public:
			Node* pNext;
			T data;

			Node(T data = T(), Node* pNext = nullptr)
			{
				this->data = data;
				this->pNext = pNext;
			}
		};
		int Size;
		Node<T>* head;
	};

	template<typename T> 
	List<T>::List()
	{
		Size = 0;
		head = nullptr;
	}


	template<typename T>
	List<T>::~List()
	{
		clear();
	}


	template<typename T>
	void List<T>::pop_front()
	{
		Node<T>* temp = head;

		head = head->pNext;

		delete temp;

		Size--;

	}

	template<typename T>
	void List<T>::push_back(T data)
	{
		if (head == nullptr)
		{
			head = new Node<T>(data);
		}
		else
		{
			Node<T>* current = this->head;

			while (current->pNext != nullptr)
			{
				current = current->pNext;
			}
			current->pNext = new Node<T>(data);

		}
		Size++;
	}

	template<typename T>
	void List<T>::clear()
	{
		while (Size)
		{
			pop_front();
		}
	}


	template<typename T>
	T& List<T>::operator[](const int index)
	{
		int counter = 0;

		Node<T>* current = this->head;

		while (current != nullptr)
		{
			if (counter == index)
			{
				return current->data;
			}
			current = current->pNext;
			counter++;
		}
	}

	template<typename T>
	void List<T>::push_front(T data)
	{
		head = new Node<T>(data, head);
		Size++;
	}

	template<typename T>
	void List<T>::insert(T data, int index)
	{

		if (index == 0)
		{
			push_front(data);
		}
		else
		{
			Node<T>* previous = this->head;

			for (int i = 0; i < index - 1; i++)
			{
				previous = previous->pNext;
			}

			Node<T>* newNode = new Node<T>(data, previous->pNext);

			previous->pNext = newNode;

			Size++;
		}
	}

	template<typename T>
	void List<T>::removeAt(int index)
	{
		if (index == 0)
		{
			pop_front();
		}
		else
		{
			Node<T>* previous = this->head;
			for (int i = 0; i < index - 1; i++)
			{
				previous = previous->pNext;
			}


			Node<T>* toDelete = previous->pNext;

			previous->pNext = toDelete->pNext;

			delete toDelete;
			
			Size--;
		}

	}

	template<typename T>
	void List<T>::pop_back()
	{
		removeAt(Size - 1);
		
	}
	template<typename T>
	void List<T>::show_list() {
		Node<T>* current = this->head;
		int tmp = Size;
		int i = 1;
		for (int i = 0; i < 120; i++) cout << "_";
		cout << endl;
		cout << " " << setw(5) << "|" << setw(12) << "Модель" << " |" << setw(19) << "Страна-производства" << " |" << setw(9) << "Материал" << " |" << setw(12) << "Цвет" << " |" << setw(12) << "Сезон" << " |" << setw(9) << "Размер" << " |" << setw(28) << "Цена           Скидка" << "|"<<endl;
		while (tmp) {
			cout <<"№"<<setw(3)<<i<<" "<< current->data;
			current = current->pNext;
			tmp--;
			i++;
		}
		
	}


	template <typename T>
	void List<T>::sort() {
		Node<T>* current = head;
		Node<T>* next = head->pNext;
		Node<T>* tmp = new Node<T>;
		while (current->pNext) {
			while (next) {
				if (current->data < next->data) {
					tmp->data = current->data;
					current->data = next->data;
					next->data = tmp->data;
				}
				next = next->pNext;
			}
			current = current->pNext;
			next = current->pNext;
		}
	}
	template <typename T>
	void List<T>::file_write(string path) {
		Node<T>* current = this->head;
		ofstream out;
		int tmp = Size;
		out.open(path, ios::app);
		out << Size << endl;
		while (tmp) {
			out << current->data;
			current = current->pNext;
			tmp--;
		}
		out.close();
	}

	
	
}
