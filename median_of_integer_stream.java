// To Find the median of the integer stream
 
import java.util.Collections;
import java.util.PriorityQueue;
 
public class MedianOfIntegerStream {
    private PriorityQueue maxHeap;
    private PriorityQueue minHeap;
 
    public MedianOfIntegerStream(){
        maxHeap = new PriorityQueue(Collections.reverseOrder());
        minHeap = new PriorityQueue();
    }
 
    public double getMedian(){
        if(maxHeap.size() == minHeap.size())
            return (double)((int)maxHeap.peek() + (int)minHeap.peek())/2;
 
        if(maxHeap.size() > minHeap.size())
            return (double)(int)maxHeap.peek();
 
        return (double)(int)minHeap.peek();
 
    }
 
    public void processInteger(int data){
        maxHeap.add(data);
 
        if(maxHeap.size() - minHeap.size() > 1
                || ( minHeap.size() > 0
                && (int)maxHeap.peek() > (int)minHeap.peek())){
            minHeap.add(maxHeap.poll());
        }
 
        if(minHeap.size() - maxHeap.size() > 1){
            maxHeap.add(minHeap.poll());
        }
    }
}