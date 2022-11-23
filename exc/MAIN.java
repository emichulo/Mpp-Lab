package exc;

public class MAIN {

	public static void main(String[] args) {
		// TODO Auto-generated method stub

		Element elem1 = new AnStd("Informatica 3");
		
		Grp g1 = new Grp("G1");
		SubGrp sg1 = new SubGrp("Sg2");
		sg1.add(new Student("1", "1@.com"));
		sg1.add(new Student("2", "2@.com"));
		g1.add(sg1);
		
		elem1.add(g1);
		elem1.add(new Grp("G2"));
		
		
		UnivStatistics us1 = new UnivStatistics();
		elem1.accpet(us1);
	}

}
