// ���������� ������ ������� power, ���
//    x - �����, ������� ����� �������� � �������
//    p - �������, � ������� ����� �������� x


int power(int x, unsigned p) {
    int answer = 1;
    int i;
    for(i = 0; i < p; i++)
        answer *= x;
    return answer;
}
