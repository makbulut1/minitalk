# Minitalk Projesi

[English](README.en.md) | [Türkçe](README.tr.md)

Minitalk, C programlama dili kullanılarak geliştirilmiş, basit ve hızlı bir mesajlaşma uygulamasıdır. Bu proje, sunucu ve istemci olmak üzere iki ana bileşenden oluşur.

## Kurulum ve Derleme

Proje dosyalarını indirin veya klonlayın:

```
git clone git@github.com:makbulut1/minitalk.git
```

Proje dizinindeyken Makefile'ı kullanarak sunucu ve istemciyi derleyebilirsiniz:

```
make all
```

## Sunucu Başlatma

Sunucuyu çalıştırmak için sunucu dosyasını yürütün ve bir işlem kimliği (process ID) ve bir mesaj argümanı olarak verin:

### Bu şekilde
```
./server
```
### Veya bu şekilde yapabilirsiniz
```
./server_bonus
```

## İstemci Başlatma

İstemciyi çalıştırmak için istemci dosyasını yürütün ve sunucu işlem kimliği ile bir mesaj argümanı olarak verin:


### Bu şekilde
```
./client [SUNUCU_PID] "Merhaba, minitalk!"
```
### Veya bu şekilde yapabilirsiniz
```
./client_bonus [SUNUCU_PID] "Merhaba, minitalk!"
```

## Katkıda Bulunma

1. Bu depoyu forklayın (`Fork` butonu yukarıda sağda)
2. Yeni bir özellik dalı oluşturun (`git checkout -b yeni-ozellik`)
3. Değişikliklerinizi commit edin (`git commit -am 'Yeni özellik: Açıklama'`)
4. Dalınızı push edin (`git push origin yeni-ozellik`)
5. Bir Pull Request açın

## Lisans

Bu proje MIT lisansı altında lisanslanmıştır - Detaylar için [LICENSE](LICENSE) dosyasına bakabilirsiniz.
