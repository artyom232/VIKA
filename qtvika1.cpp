#include <QApplication> // ����������� ���������� ��� �������� ����������
#include <QWidget> // ����������� ���������� ��� �������� �������
#include <QLabel> // ����������� ���������� ��� �������� ��������� �����
#include <QCheckBox> // ����������� ���������� ��� �������� ���������
#include <QPushButton> // ����������� ���������� ��� �������� ������
#include <QVBoxLayout> // ����������� ���������� ��� �������� ������������� ������

int main(int argc, char* argv[]) {
    QApplication app(argc, argv); // �������� ����������

    QWidget window; // �������� �������� ����
    window.setWindowTitle("Simple GUI"); // ��������� ��������� ����

    QLabel* label = new QLabel("�������� �����:", &window); // �������� ��������� �����

    QCheckBox* checkBox1 = new QCheckBox("����� 1", &window); // �������� ������� ��������
    QCheckBox* checkBox2 = new QCheckBox("����� 2", &window); // �������� ������� ��������
    QCheckBox* checkBox3 = new QCheckBox("����� 3", &window); // �������� �������� ��������

    QPushButton* button = new QPushButton("��", &window); // �������� ������ "��"

    QVBoxLayout* layout = new QVBoxLayout(); // �������� ������������� ������
    layout->addWidget(label); // ���������� ��������� ����� � �����
    layout->addWidget(checkBox1); // ���������� ������� �������� � �����
    layout->addWidget(checkBox2); // ���������� ������� �������� � �����
    layout->addWidget(checkBox3); // ���������� �������� �������� � �����
    layout->addWidget(button); // ���������� ������ � �����

    window.setLayout(layout); // ��������� ������ ��� �������� ����
    window.show(); // ����������� �������� ����

    return app.exec(); // ������ ����� ��������� �������