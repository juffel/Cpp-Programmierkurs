struct DList 
{
    Item * first;
    Item * last;
    Item anchor;
    DList()
    {
        anchor = new Item();
        first = &anchor;
        last = &anchor;
        anchor.prev = &anchor;
        anchor.next = &anchor;
    }
    void insert(Item * prev, Item * it)
    {
        it = prev->next;
        // was soll man eigentlich tun? mag die aufgabenstellung nicht...
    }
};

struct Item
{
    int content;
    Item * prev;
    Item * next;
    Item(int value)
    {
        int content = value;
    }
};
