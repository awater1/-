package Experiment2;
import java.util.Comparator;
import java.util.PriorityQueue;
import java.util.Vector;

public class BB4TSP {

	int NoEdge = -1; //��ʾû�б�
	private int minCost = Integer.MAX_VALUE; //��ǰ��С����
	public int getMinCost() {
		return minCost;
	}

	public void setMinCost(int minCost) {
		this.minCost = minCost;
	}

    Comparator<HeapNode> cmp = new Comparator<HeapNode>() {
        public int compare(HeapNode e1, HeapNode e2) {//�Ӵ�С����
          return e2.lcost - e1.lcost;
        }
      };
  	
  	private PriorityQueue<HeapNode> priorHeap = new PriorityQueue<HeapNode>(100, cmp);//�洢��ڵ�
	private Vector<Integer> bestH = new Vector<Integer>();
	
	
	@SuppressWarnings("rawtypes")
	public static class HeapNode implements Comparable{
		Vector<Integer> cityArrange = new Vector<Integer>();//��������
		int lcost; //���۵��½�
		int level;//0-level�ĳ������Ѿ��źõ�
		//���췽��
		public HeapNode(Vector<Integer> cities,int lb, int lev){
			cityArrange.addAll(0, cities);
			lcost = lb;
			level = lev;
		}
		
		@Override
		public int compareTo(Object x) {//��������, ÿһ��pollFirst
			int xu=((HeapNode)x).lcost;
			if(lcost<xu) return -1;
			if(lcost==xu) return 0;
			return 1;
		}
		public boolean equals(Object x){
			return lcost==((HeapNode)x).lcost;
		}

	}
	
	/**
	 * ���㲿�ֽ���½�.
	 * 
	 * @param cityArrange 
	 * 		              ���е�����
	 *  
	 * @param n   
	 * 			   ��ǰȷ���ĳ��еĸ���.
	 * @param cMatrix
	 *            �ڽӾ��󣬵�0�У�0�в���
	 * 
	 * @exception IllegalArgumentException
	 */
	public int computeLB(Vector<Integer> cityArrange, int level, int[][] cMatrix)
	{
		//TODO
		return -1;
	}
	
	/**
	 * ����TSP�������С���۵�·��.
	 * 
	 * @param cMatrix
	 *            �ڽӾ��󣬵�0�У�0�в���
	 * @param n   ���и���.
	 * @exception IllegalArgumentException
	 */
	public int bb4TSP(int[][] cMatrix, int n)
	{
		//�����ʼ�ڵ�
		Vector<Integer> cityArrange = new Vector<Integer>() ;//��������
		cityArrange.add(0);//�ճ�һ�����У���cMatrixһ��
		for(int i = 1; i<=n; i++) cityArrange.add(i);
		int level = 1;//0-level�ĳ������Ѿ��źõ�
		int lcost = computeLB(cityArrange, level, cMatrix) ; //���۵��½�
		while(level != n)
		{
			//TODO
			//�ο����ȶ��У���ͣ��չ�ڵ�,ѡȡ��һ���ڵ�
		}
		
		return minCost;
	}
	
}
