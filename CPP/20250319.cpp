/*
  문제1. 사용자로부터 총 5개의 정수를 입력받아서, 그 합을 출력하는 프로그램을 작성해 보자. 단, 프로그램의 실행은 다음과 같이 이뤄져야 한다.
  실행 예
  1번째 정수 입력 : 1
  ...
  5번째 정수 입력 : 5
  합계 : 15
*/
#include <iostream>

int main()
{
    int nAnswer{};      // 합계
    int nInputNum{};    // 입력한 정수
    int nIndex{};       // 반복문에 사용될 index (0부터)
    int nCount{};       // 몇번째인지 (1부터)

    nCount = 1;
    while (nIndex < 5)
    {
        printf("%d번째 정수 입력 : ", nCount);
        scanf_s("%d", &nInputNum);
        nAnswer += nInputNum;
        nIndex++;
        nCount++;
    }
    printf("합계 : %d", nAnswer);
}

/*
  문제2. 프로그램 사용자로부터 이름과 전화번호를 문자열의 형태로 입력 받아서, 입력 받은 데이터를 그대로 출력하는 프로그램을 작성해보자. (cout, cin)
*/
#include <iostream>

int main()
{
	char strName[20]{};
	char strPhone[30]{};

	printf("이름은 무엇인가요? : ");
	scanf_s("%s", &strName, 20);
	printf("전화번호를 입력해 주세요. : ");
	scanf_s("%s", &strPhone, 30);

	printf("이름은 \"%s\"이고, 전화번호는 \"%s\"입니다.", strName, strPhone);
}

/*
  문제3. 숫자를 하나 입력 받아서 그 숫자에 해당하는 구구단을 출력하는 프로그램을 작성해 보자. 예를 들어서 사용자가 5를 입력한다면 구구단에서 5단을 출력해야 한다.
*/
#include <iostream>

int main()
{
	int nInputNum{};
	int nMultiply{};

	printf("구구단 몇단을 출력하실 건가요? : ");
	scanf_s("%d", &nInputNum);

	nMultiply = 1;
	for (int i = 0; i < 9; i++)
	{
		int nResult = nInputNum * nMultiply;
		printf("%d * %d = %d\n", nInputNum, nMultiply, nResult);
		nMultiply++;
	}
}

/*
  문제4. 판매원들의 급여 계산 프로그램을 작성해 보자. 이 회사는 모든 판매원에게 매달 50만원의 기본 급여와 물품 판매 가격의 12%에 해당하는 돈을 지급한다.
  예를 들어서 민수라는 친구의 이번 달 물품 판매 금액이 100만원이라면, 50 + 100 * 0.12 = 62, 따라서 62만원을 급여로 지급받는다.
  단, 아래의 실행의 예에서 보이듯이 이러한 급여 계산은 -1이 입력될 때까지 계속 되어야 한다.
  실행 예
  판매 금액을 만원 단위로 입력(-1 to end) : 100
  이번달 급여 : 62만원
  ...
  판매 금액을 만원 단위로 입력(-1 to end) : -1
  프로그램을 종료합니다.
*/
#include <iostream>

int main()
{
	int nSellAmount{};		// 판매 금액
	int nSalary{};			  // 총 급여
	bool bIsLoop = true;	// 반복문 지속 여부

	while (bIsLoop)
	{
		printf("판매 금액을 만원 단위로 입력(-1 to end) : ");
		scanf_s("%d", &nSellAmount);
		nSalary = 50 + nSellAmount * 0.12;
		if (nSellAmount != -1)
			printf("이번달 급여 : %d만원\n", nSalary);
		else
			bIsLoop = false;
	}
	printf("프로그램을 종료합니다.");
}
