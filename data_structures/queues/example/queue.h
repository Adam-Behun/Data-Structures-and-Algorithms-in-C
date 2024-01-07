#ifndef queue_h
#define queue_h

template <typename T, int max_size>
class queue{
    private:
    T arr[max_size];
    int index_start;
    int index_end;
    int num_ele;
    public:
    queue();
    template <typename T1>
    void enqueue(T1);
    void dequeue();
    T front();
    T back();
    bool IsFull();
    bool IsEmpty();
    void print();
};
#endif /* queue.h */