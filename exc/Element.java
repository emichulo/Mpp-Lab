package exc;

public interface Element {
	void print();
	
	void remove(Element elm);
	Element add(Element elm);
	
	void accpet(Visitor vis);
	
}
