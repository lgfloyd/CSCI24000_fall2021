import java.io.*;
import javax.swing.*;

public class AsciiCanvas extends JTextArea implements java.io.Serializable{

    protected JTextArea JTextArea;
    protected AFrame linkedListHead;
    protected AFrame currentAFrame;

    public AsciiCanvas()
    {
        JTextArea = new JTextArea(100, 25);
        linkedListHead = new AFrame();
        currentAFrame = null;
        currentAFrame = linkedListHead;
    }

    public void prevFrame()
    {
        if (currentAFrame.getPrev() != null)
        {
            currentAFrame = currentAFrame.getPrev();
            JTextArea.append(currentAFrame.getPayload());
            currentAFrame.setPayload(JTextArea.getText());
        }

        else
        {
            JTextArea.append("");
        }
    }

    public void nextFrame()
    {
        if (currentAFrame.getNext() == null)
        {
            currentAFrame.setPrev(currentAFrame);

            AFrame newAFrame = new AFrame("", currentAFrame, null);

            currentAFrame = newAFrame;
            currentAFrame.setNext(currentAFrame);
            currentAFrame.setPayload(JTextArea.getText());
        }

        else
        {
            currentAFrame = currentAFrame.getNext();
            JTextArea.append(currentAFrame.getPayload());
        }
    }

    public void anim()
    {
        while (currentAFrame != null)
        {
            JTextArea.append(currentAFrame.getPayload());
            currentAFrame = currentAFrame.getNext();
        }
    }

    public void save()
    {
        try
        {
            FileOutputStream outputFile = new FileOutputStream("inheritanceAnimation.ser");
            ObjectOutputStream output = new ObjectOutputStream(outputFile);

            output.writeObject(linkedListHead);

            outputFile.close();
            output.close();
        }

        catch(Exception e)
        {
            System.out.println(e.getMessage());
        }
    }

    public void load()
    {
        try
        {
            FileInputStream inputFile = new FileInputStream("inheritanceAnimation.ser");
            ObjectInputStream input = new ObjectInputStream(inputFile);

            AFrame currentAFrame = (AFrame)input.readObject();
            AFrame linkedListHead = currentAFrame;

            input.close();
            inputFile.close();
        }

        catch(Exception e)
        {
            System.out.println(e.getMessage());
        }

        JTextArea.append(linkedListHead.getPayload());
    }
}
