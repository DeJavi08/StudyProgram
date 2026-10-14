import Container from 'react-bootstrap/Container';
import Row from 'react-bootstrap/Row';
import Col from 'react-bootstrap/Col';
import ListGroup from 'react-bootstrap/ListGroup';

const pricingData = [
  {
    id: 1,
    plan: 'Starter Web',
    price: 'Rp 1.500.000',
    features: [
      'Landing Page Responsif (1–3 Halaman)',
      'Desain UI/UX Modern & Clean',
      'Optimasi SEO Dasar & Kecepatan',
      'Free Domain (.my.id/.com) & SSL 1 Tahun',
      'Garansi & Maintenance 1 Bulan'
    ],
    link: '#contact'
  },
  {
    id: 2,
    plan: 'Business Pro',
    price: 'Rp 4.500.000',
    features: [
      'Multi-page Web / Company Profile (s.d. 8 Halaman)',
      'CMS / Admin Dashboard Sederhana',
      'Integrasi WhatsApp API & Form Leads',
      'Setup Cloud Hosting / VPS Berperforma Tinggi',
      'Garansi & Pemeliharaan Bug 3 Bulan'
    ],
    link: '#contact'
  },
  {
    id: 3,
    plan: 'Enterprise & Mobile',
    price: '+ Rp 9.500.000',
    features: [
      'Full Custom Web App atau Mobile App (Flutter)',
      'Arsitektur Database Skalabel & REST API',
      'Konfigurasi VPS Linux + CI/CD Deployment',
      'Integrasi Payment Gateway / Fitur Khusus',
      'Dedicated Support & SLA Maintenance 6 Bulan'
    ],
    link: '#contact'
  }
];

function AppPricing() {
  return (
    <section id="pricing" className="block pricing-block">
      <Container fluid>
        <div className="title-holder">
          <h2>Pricing &amp; Plans</h2>
          <div className="subtitle">pilihan paket transparan sesuai skala kebutuhan bisnis Anda</div>
        </div>
        <Row>
          {
            pricingData.map(pricing => {
              return (
                <Col sm={4} key={pricing.id}>
                  <div className='heading'>
                    <h3>{pricing.plan}</h3>
                    <span className='price'>{pricing.price}</span>
                  </div>
                  <div className='content'>
                    <ListGroup>
                      {
                        pricing.features.map((feature, index) => {
                          return (
                            <ListGroup.Item key={index}>{feature}</ListGroup.Item>    
                          );
                        })
                      }
                    </ListGroup>
                  </div>
                  <div className='btn-holder'>
                    <a href={pricing.link} className='btn btn-primary'>Pilih Paket</a>
                  </div>
                </Col>
              );
            })
          }
        </Row>
      </Container>
    </section>
  );
}

export default AppPricing;