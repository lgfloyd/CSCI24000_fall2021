public class AFrame implements java.io.Serializable
{
    private String payload;
    private AFrame previous;
    private AFrame next;

    public AFrame()
    {
        this.payload = "";
        this.previous = null;
        this.next = null;
    }

    public AFrame(String payload, AFrame previous, AFrame next)
    {
        this.payload = payload;
        this.previous = previous;
        this.next = next;
    }

    public String getPayload()
    {
        return this.payload;
    }

    public void setPayload(String payload)
    {
        this.payload = payload;
    }

    public AFrame getPrev()
    {
        return this.previous;
    }

    public void setPrev(AFrame previous)
    {
        this.previous = previous;
    }

    public AFrame getNext()
    {
        return this.next;
    }

    public void setNext(AFrame next)
    {
        this.next = next;
    }
}
