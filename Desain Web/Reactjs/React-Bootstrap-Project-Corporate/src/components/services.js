import Container from 'react-bootstrap/Container';
import Row from 'react-bootstrap/Row';
import Col from 'react-bootstrap/Col';

const servicesData = [
  {
    id: 1,
    icon: 'fas fa-laptop-code',
    title: 'Web Development',
    description: 'Pembuatan website profesional yang responsif, cepat diakses, dan dirancang presisi sesuai kebutuhan bisnis Anda di semua perangkat.'
  },
  {
    id: 2,
    icon: 'fas fa-mobile-alt',
    title: 'Mobile App Development',
    description: 'Pengembangan aplikasi mobile berbasis Flutter untuk iOS dan Android dengan antarmuka mulus dan performa tinggi.'
  },
  {
    id: 3,
    icon: 'fas fa-server',
    title: 'Server & Cloud Setup',
    description: 'Konfigurasi VPS, optimasi server, hardening keamanan firewall, serta manajemen deployment agar sistem selalu stabil online.'
  },
  {
    id: 4,
    icon: 'fas fa-search',
    title: 'SEO & Speed Optimization',
    description: 'Optimasi struktur website, meta tag, dan kecepatan loading agar peringkat situs Anda naik di mesin pencari Google.'
  },
  {
    id: 5,
    icon: 'fas fa-globe',
    title: 'Cross-Browser Compatibility',
    description: 'Memastikan seluruh fitur dan tampilan web berfungsi konsisten tanpa kendala di Chrome, Safari, Firefox, maupun Edge.'
  },
  {
    id: 6,
    icon: 'fas fa-headset',
    title: 'Maintenance & Support',
    description: 'Dukungan teknis berkala, pemeliharaan sistem, backup rutin, dan penanganan kendala teknis agar bisnis tetap berjalan lancar.'
  }
];

function AppServices() {
  return (
    <section id="services" className="block services-block">
      <Container fluid>
        <div className="title-holder">
          <h2>Our Services</h2>
          <div className="subtitle">solusi teknologi terbaik untuk mengembangkan bisnis Anda</div>
        </div>
        <Row>
          {
            servicesData.map(services => {
              return (
                <Col sm={4} className='holder' key={services.id}>
                  <div className="icon">
                    <i className={services.icon}></i>
                  </div>
                  <h3>{services.title}</h3>
                  <p>{services.description}</p>
                </Col>
              );
            })
          }
        </Row>
      </Container>
    </section>
  );
}

export default AppServices;