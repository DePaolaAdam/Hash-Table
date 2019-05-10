Node::Node(String input)
{
    count = 0;
    str = input;
    next = NULL;
}

void Node::setNext(Node n)
{
    next = n;
}

Node Node::getNext()
{
    return next;
}

void Node::addCount()
{
    count ++;
}
