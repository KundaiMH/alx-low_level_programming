listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
    listint_t *new_node, *current;
    unsigned int index;

    current = *head;

    new_node = malloc(sizeof(listint_t));
    if (new_node == NULL)
        return (NULL);

    new_node->n = n;

    if (idx == 0)
    {
        new_node->next = *head;
        *head = new_node;
    }
    else
    {
        for (index = 0; current != NULL && index < idx - 1; index++)
        {
            current = current->next;
        }

        if (current == NULL)
        {
            free(new_node);
            return (NULL);
        }

        new_node->next = current->next;
        current->next = new_node;
    }

    return (new_node);
}
