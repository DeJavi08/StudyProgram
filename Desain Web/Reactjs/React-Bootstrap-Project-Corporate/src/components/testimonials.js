import Container from 'react-bootstrap/Container';
import Carousel from 'react-bootstrap/Carousel';

const testimonialsData = [
  {
    id: 1,
    name: 'Budi Santoso',
    designation: 'Founder & CEO, Retail Connect',
    description: 'AHA TECH berhasil mewujudkan platform web bisnis kami dengan sangat cepat dan mulus. Tampilannya responsif, loading kencang, dan conversion rate kami naik signifikan setelah relaunch.'
  },
  {
    id: 2,
    name: 'Sarah Pramudita',
    designation: 'Operations Lead, Logistik Prima',
    description: 'Pengembangan aplikasi mobile berbasis Flutter berjalan tepat waktu dan tanpa kendala teknis berarti. Timnya sangat komunikatif serta solutif saat membahas fitur-fitur kompleks.'
  },
  {
    id: 3,
    name: 'Hendri Wijaya',
    designation: 'CTO, Edutech Nusantara',
    description: 'Optimasi server dan konfigurasi cloud yang dilakukan AHA TECH terbukti tangguh. Sistem kami tetap stabil tanpa downtime meski menghadapi lonjakan traffic saat event berlangsung.'
  }
];

function AppTestimonials() {
  return (
    <section id="testimonials" className="testimonials-block">
      <Container fluid>
        <div className="title-holder">
          <h2>Client Testimonials</h2>
          <div className="subtitle">apa kata klien tentang solusi dan kerja sama kami</div>
        </div>
        <Carousel controls={false}>
          {
            testimonialsData.map(testimonial => {
              return (
                <Carousel.Item key={testimonial.id}>
                  <blockquote>
                    <p>"{testimonial.description}"</p>
                    <cite>
                      <span className='name'>{testimonial.name}</span>
                      <span className='designation'>{testimonial.designation}</span>
                    </cite>
                  </blockquote>             
                </Carousel.Item>
              );
            })
          }
        </Carousel>
      </Container>
    </section>
  );
}

export default AppTestimonials;