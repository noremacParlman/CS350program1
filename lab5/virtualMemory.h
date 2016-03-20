/*
	virtualmemory header
*/
class virtualMemory{
	public:
	/*constructors*/
	virtualMemory();
	virtualMemory(int size);
	
	/*functions*/

	/*start new process*/
	void start(int process, int size);

	/*terminate a process*/
	void terminate(int process);

	/*reference a process*/
	void reference(int process, int page_number);	


};
