import Container from 'react-bootstrap/Container';
import Row from 'react-bootstrap/Row';
import Col from 'react-bootstrap/Col';
import Form from 'react-bootstrap/Form';
import Button from 'react-bootstrap/Button';

function AppContact() {
  return (
    <section id="contact" className="block contact-block">
      <Container fluid>
        <div className="title-holder">
          <h2>Contact Us</h2>
          <div className="subtitle">diskusikan kebutuhan proyek Anda bersama tim kami</div>
        </div>
        <Form className='contact-form'>
          <Row>
            <Col sm={4}>
              <Form.Control type="text" placeholder="Nama Lengkap" required />
            </Col>
            <Col sm={4}>
              <Form.Control type="email" placeholder="Alamat Email" required />
            </Col>
            <Col sm={4}>
              <Form.Control type="tel" placeholder="Nomor WhatsApp / Telepon" required />
            </Col>
          </Row>
          <Row>
            <Col sm={12}>
              <Form.Control as="textarea" rows={4} placeholder="Ceritakan detail proyek atau kebutuhan Anda di sini..." required />
            </Col>
          </Row>
          <div className='btn-holder'>
            <Button type="submit">Kirim Pesan</Button>
          </div>
        </Form>
      </Container>
      <div className='google-map'>
        <iframe 
          title="map" 
          src="https://www.google.com/maps/embed?pb=!1m18!1m12!1m3!1d3957.6919794354233!2d112.79156707574516!3d-7.275841771497204!2m3!1f0!2f0!3f0!3m2!1i1024!2i768!4f13.1!3m3!1m2!1s0x2dd7fa10ea2ae883%3A0xe30a30999296801b!2sPoliteknik%20Elektronika%20Negeri%20Surabaya!5e0!3m2!1sid!2sid!4v1715000000000!5m2!1sid!2sid"
          loading="lazy"
        ></iframe>
      </div>
      <Container fluid>
        <div className='contact-info'>
          <ul>
            <li>
              <i className="fas fa-envelope"></i>
              contact@ahatech.id
            </li>
            <li>
              <i className="fas fa-phone"></i>
              +62 821-3456-7890
            </li>
            <li>
              <i className="fas fa-map-marker-alt"></i>
              Surabaya, Jawa Timur, Indonesia
            </li>
          </ul>
        </div>
      </Container>
    </section>
  );
}

export default AppContact;