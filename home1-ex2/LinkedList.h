typedef struct nm_stack
{

	unsigned int val;
	struct nm_stack* next;

} nm_stack;

nm_stack* add_nm(nm_stack* stack, int nm);

void delet(nm_stack* stack);