import java.awt.*;
import java.applet.*;
import java.awt.event.*;
import javax.swing.*;

import javax.swing.ButtonGroup;
import javax.swing.JRadioButton;
import javax.swing.JTextArea;
import javax.swing.JTextField;
// <applet code='radio' width=500 height=900></applet>
public class radio extends JApplet implements ItemListener{
    JTextField t;
    public void init(){
        Container cp = getContentPane();
        cp.setSize(500, 900);
        cp.setVisible(true);
        cp.setLayout(new FlowLayout());

        ImageIcon i = new ImageIcon("a.png");
        JRadioButton b1= new JRadioButton("first", i);
        JRadioButton b2= new JRadioButton("second");
        cp.add(b1);
        cp.add(b2);
        b1.addItemListener(this);
        b2.addItemListener(this);

        ButtonGroup bg = new ButtonGroup();
        bg.add(b1);
        bg.add(b2);

        t = new JTextField(10);
        cp.add(t);
    }
    public void itemStateChanged(ItemEvent e){
        t.setText(((JRadioButton)e.getItem()).getText());
    }
}
