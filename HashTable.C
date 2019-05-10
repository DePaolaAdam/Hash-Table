#include <string>
HashTable::HashTable()
{
    table = Node[SIZE];
}

void HashTable::insert(Node input)
{
    int hash = hash(input.str);

}
bool HashTable::find(string input)
{
    int hash = hash(input);
    Node tempNode = table[hash];
    for(tempNode; tempNode!= NULL; tempNode = tempNode.getNext())
    {
        if(tempNOde)
    }
    return NULL;

}

int HashTable::hash(string input)
{
    int hash = 0;
    for (int i = 0; i < input.length(); i ++)
    {
        hash = (hash * 2971 + input.charAt(i)) % SIZE;
    }
    return hash;
}
