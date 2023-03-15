

class RingBuffer {
private:
    int size;
    int *arr;
    int firstPos;
    int occupied;
public:
    RingBuffer(int size);
    int getSize();
    void clear();
    bool isEmpty();
    void add(int newElem);
    int takeElem(); //withdraw
    int getElem(); // not withdraw
};
