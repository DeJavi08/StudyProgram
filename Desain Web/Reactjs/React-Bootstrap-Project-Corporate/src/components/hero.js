import Carousel from 'react-bootstrap/Carousel';

const heroData = [
  {
    id: 1,
    image: 'https://www.pens.ac.id/wp-content/uploads/2026/05/Foto-Drone-PENS-6.jpg',
    title: 'Solusi Web & Mobile Modern',
    description: 'Membangun aplikasi website dan mobile lintas platform berbasis Flutter yang cepat, aman, dan responsif untuk berbagai skala bisnis.',
    link: '#services'
  },
  {
    id: 2,
    image: 'https://www.pens.ac.id/wp-content/uploads/2018/04/image-25.jpg',
    title: 'Infrastruktur Server & Cloud Tangguh',
    description: 'Optimasi VPS, konfigurasi lingkungan server Linux, dan manajemen deployment terukur demi menjaga uptime dan kecepatan situs Anda.',
    link: '#about'
  },
  {
    id: 3,
    image: 'https://www.pens.ac.id/wp-content/uploads/2022/04/Gambar-tampak-samping-gedung-D4.jpg',
    title: 'Kolaborasi & Inovasi Teknologi',
    description: 'Dari perancangan UI/UX intuitif hingga prototipe cerdas berbasis IoT, kami siap mengeksekusi ide digital Anda secara presisi.',
    link: '#contact'
  }
];

function AppHero() {
  return (
    <section id="home" className="hero-block">
      <Carousel fade interval={4000}>
        {heroData.map(hero => {
          return (
            <Carousel.Item key={hero.id}>
              <div style={{ position: 'relative', width: '100%', height: '580px', overflow: 'hidden' }}>
                <img
                  className="d-block w-100"
                  src={hero.image}
                  alt={hero.title}
                  style={{
                    height: '100%',
                    objectFit: 'cover',
                    objectPosition: 'center',
                    filter: 'brightness(0.25)' // Mempergelap foto agar teks kontras
                  }}
                />
              </div>
              <Carousel.Caption>
                <h2>{hero.title}</h2>
                <p>{hero.description}</p>
                <a className="btn btn-primary" href={hero.link}>
                  Pelajari Lebih Lanjut <i className="fas fa-chevron-right ms-1"></i>
                </a>
              </Carousel.Caption>
            </Carousel.Item>
          );
        })}
      </Carousel>
    </section>
  );
}

export default AppHero;