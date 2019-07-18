#include <stdio.h>
#include <windows.h>

void print_menu(void);
int get_menu_num(int x);
void hambuger(void);
void sandwitch(void);
void chicken(void);

int main()
{
  print_menu();
  
  
}

void print_menu(void)
{
  int num;
  
  puts("1.햄버거");
  puts("2.샌드위치");
  puts("3.치킨");
  puts("4.종료");
  puts("원하는 메뉴를 선택하세요");
  
  scanf("%d",&num);
  get_menu_num(num);
  
}

int get_menu_num(int x)
{
  switch(x)
  {
    case 1:
      hambuger();
      break;
      
    case 2:
      sandwitch();
      break;
      
    case 3:
      chicken();
      break;
      
    case 4:
      puts("종료합니다.");
      break;
      
    default:
      puts("정확한 번호를 입력해 주세요.");
      print_menu();
  }
}
 
  
  void hambuger(void)
  {
      puts("1번 메뉴 햄버거를 선택하셨습니다.");
      puts("준비중입니다.");
      Sleep(1000);
      puts("패티 굽는중");
      Sleep(1000);
      puts("야채 올리는중");
      Sleep(1000);
      puts("햄버거가 준비되었습니다");
      puts("카운터로 와서 받아가세요.");
    return;
  }
  
  void sandwitch(void)
  {
    puts("2번 메뉴 샌드위치를 선택하셨습니다.");
      puts("준비중입니다.");
      Sleep(1000);
      puts("파니니 굽는중");
      Sleep(1000);
      puts("햄 끼우는중");
      Sleep(1000);
      puts("샌드위치가 준비되었습니다");
      puts("카운터로 와서 받아가세요.");
    return;
  }
  
  void chicken(void)
  {
    puts("3번 메뉴 치킨을 선택하셨습니다.");
      puts("준비중입니다.");
      Sleep(1000);
      puts("치킨 튀기는 중");
      Sleep(1000);
      puts("콜라 뽑는 중");
      Sleep(1000);
      puts("치킨이 준비되었습니다");
      puts("카운터로 와서 받아가세요.");
    return;
  }
  
