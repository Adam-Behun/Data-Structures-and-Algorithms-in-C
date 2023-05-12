int main(){
    queue<int, 3> q;

    q.dequeue();

    cout<<"----"<<endl;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    cout<<"Front: "<<q.front()<<endl;
    cout<<"Back: "<<q.back()<<endl;
    q.print();

    cout<<"----"<<endl;
    q.enqueue(4);
    cout<<"Front: "<<q.front()<<endl;
    cout<<"Back: "<<q.back()<<endl;
    q.print();

    cout<<"----"<<endl;
    q.dequeue();
    cout<<"Front: "<<q.front()<<endl;
    cout<<"Back: "<<q.back()<<endl;
    q.print();

    cout<<"----"<<endl;
    q.dequeue();
    cout<<"Front: "<<q.front()<<endl;
    cout<<"Back: "<<q.back()<<endl;
    q.enqueue(10);
    q.enqueue(20);
    cout<<"Front: "<<q.front()<<endl;
    cout<<"Back: "<<q.back()<<endl;
    q.print();

    return 0;
}