#include <iostream>
using namespace std;

#define MAX 5

int queue[MAX];
int front = -1;
int rear = -1;

void enqueue()
{
    int value;

    if(rear == MAX - 1)
    {
        cout << "Queue Overflow" << endl;
    }
    else
    {
        cout << "Enter value: ";
        cin >> value;

        if(front == -1)
            front = 0;

        rear++;
        queue[rear] = value;

        cout << "Element inserted successfully" << endl;
    }
}

void dequeue()
{
    if(front == -1 || front > rear)
    {
        cout << "Queue Underflow" << endl;
    }
    else
    {
        cout << "Deleted element: " << queue[front] << endl;
        front++;
    }
}

void display()
{
    if(front == -1 || front > rear)
    {
        cout << "Queue is empty" << endl;
    }
    else
    {
        cout << "Queue elements are: ";
        for(int i = front; i <= rear; i++)
        {
            cout << queue[i] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int choice;

    do
    {
        cout << "\n1. Enqueue";
        cout << "\n2. Dequeue";
        cout << "\n3. Display";
        cout << "\n4. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                enqueue();
                break;

            case 2:
                dequeue();
                break;

            case 3:
                display();
                break;

            case 4:
                cout << "Exiting program";
                break;

            default:
                cout << "Invalid choice";
        }

    } while(choice != 4);

    return 0;
}
