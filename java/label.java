import javax.swing.*;
import java.awt.*;
import java.awt.event.*;

class myclass extends JFrame implements ActionListener {
    JLabel label1, label2;
    JTextField text1, text2, result;

    myclass() {
        setSize(500, 500);
        setLayout(new FlowLayout());
        setVisible(true);
        setDefaultCloseOperation(EXIT_ON_CLOSE);
        label1 = new JLabel("Enter the first number");
        text1 = new JTextField(20);
        label2 = new JLabel("Enter the second number");
        text2 = new JTextField(20);
        result = new JTextField(10);
        JButton btn = new JButton("Add");
        btn.addActionListener(this);
        add(label1);
        add(text1);
        add(label2);
        add(text2);
        add(btn);
        add(result);
    }

    public void actionPerformed(ActionEvent e) {
        result.setText(Integer.parseInt(text1.getText()) + Integer.parseInt(text2.getText()) + "");
    }

    public static void main(String args[]) {
        new myclass();
    }
}
