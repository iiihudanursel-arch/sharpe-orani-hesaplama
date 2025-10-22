# Sharpe Oranı Hesaplayıcı

Bu basit C programı, bir yatırımın risk-ayarlı getirisini ölçmek için kullanılan *Sharpe Oranı*'nı hesaplar. Kullanıcıdan yatırım getirisi, risksiz faiz oranı ve standart sapma (risk) bilgilerini alarak Sharpe Oranını hesaplar ve bu orana göre yatırımın performansını değerlendirir.

## Sharpe Oranı Nedir?

Sharpe Oranı, bir yatırımın aldığı her birim risk için ne kadar fazla getiri sağladığını gösteren popüler bir ölçüttür.

$$
\text{Sharpe Oranı} = \frac{\text{Yatırım Getirisi} - \text{Risksiz Faiz Oranı}}{\text{Standart Sapma}}
$$

* *Yatırım Getirisi:* Yatırımın toplam getirisi.
* *Risksiz Faiz Oranı:* Hazine bonosu gibi risksiz kabul edilen bir yatırımın getirisi.
* *Standart Sapma (Risk):* Yatırımın getirisindeki oynaklığı (volatiliteyi) gösterir.

Yüksek bir Sharpe Oranı, yatırımın benzer riske sahip diğer yatırımlara göre daha iyi performans gösterdiği anlamına gelir.

## Programın Özellikleri

* *Girdi:* Yatırım getirisi (%), Risksiz faiz oranı (%) ve Standart sapma (%).
* *Çıktı:* Hesaplanan Sharpe Oranı ve bu orana dayalı performans değerlendirmesi.
* *Değerlendirme Kriterleri (Program İçi):*
    * < 1: Zayıf
    * 1 <= x < 2: İyi
    * 2 <= x < 3: Çok İyi
    * >= 3: Mükemmel

## Kurulum ve Çalıştırma

Bu program, standart C kütüphaneleri kullandığı için ek bir bağımlılığa ihtiyaç duymaz. Herhangi bir C derleyicisi (örneğin GCC) ile derlenebilir ve çalıştırılabilir.

### 1. C Derleyicisi Kurulumu

Eğer sisteminizde GCC yüklü değilse, işletim sisteminize uygun olarak kurun.

### 2. Derleme

Program kodunu sharpe_hesaplayici.c adıyla kaydettiğinizi varsayalım:

```bash
gcc sharpe_hesaplayici.c -o sharpe
