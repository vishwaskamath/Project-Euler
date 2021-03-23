function multiplesOf3and5(number) {
  var i=0;
  var sum=0;
  for(i =1;i<number;i++)
  {
    if(i%3==0 || i%5==0)
    {
      sum+=i;
    }
  }
  return sum;
}

multiplesOf3and5(1000);
