#include <iostream>

using namespace std;

class node
{
    public:
        string name;
        node *next;
        node(string input) {name = input; next = NULL;};

};

int main(void)

{

	node *root = NULL;
	node *p_node , new_node;

	while(true)
	{
	    cout << "Enter a name (or ENTER to exit): ";
	    getline(cin, a_name);
	    if( a_name.empty() )
            break;
        new_node = new_node(a_name);

        // If list is new or node goes at beginning,
        // then insert as root node. Otherwise,
        // search for a node to insert node AFTER.

        if(root == NULL || a_name < root->name)
        {
            new_node->next = root;
            root = new_node;

        }

        else
        {
            p_node = root;
            while(p_node->next && a_name> p_node->next->name)
            {
                new_node->next = p_node->next;

            }

            new_node->next = new_node;
            p_node->next = new_node;
        }
	}

	p_node = root;

	while(p_node)
	{
	    cout << p_node->name << endl;
	    p_node = p_node->next;
	}






	return 0;
}
