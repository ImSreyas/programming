package java;
import java.awt.*;
import javax.swing.*;
import javax.swing.event.InternalFrameListener;

import java.awt.event.*;
import java.applet.*;

public class hhh extends JFrame implements ItemListener
{
    public static void main(String args [])
    {
        JFrame frame = new JFrame("null layout manager");
        frame.setVisible(true);
        frame.setSize(500,500);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        Container contentpane = frame.getContentPane();
        contentpane.setLayout(null);
        
        JLabel lb1 = new JLabel("what is your name");
        contentpane.add(lb1);
        lb1.setBounds(50,50,300,50);
    }
    public void ItemListener(ItemEvent e){
        
    }
}