import Container from 'react-bootstrap/Container';
import Row from 'react-bootstrap/Row';
import Col from 'react-bootstrap/Col';
import Image from 'react-bootstrap/Image';
import ProgressBar from 'react-bootstrap/ProgressBar';

import img1 from '../assets/images/img1.jpg';

function AppAbout() {
  const html = 80;
  const flutter = 95;
  const server = 60;

  return (
    <section id="about" className="block about-block">
      <Container fluid>
        <div className="title-holder">
          <h2>About Us</h2>
          <div className="subtitle">learn more about us</div>
        </div>
        <Row>
          <Col sm={6}>
            <Image src="https://logos-world.net/wp-content/uploads/2021/12/AHA-New-Logo.png" />
          </Col>
          <Col sm={6}>
            <p>Selamat datang di AHA TECH! Kami siap membantu Anda memiliki website yang menarik, cepat, dan mudah digunakan.</p>
            <p>Kami siap bikin landing page sederhana sampai sistem web kompleks, kami kerjakan dengan teliti dan tepat waktu. Klien adalah Raja kami!!</p>
              <div className='progress-block'>
              <h4>HTML / CSS / Javascript</h4>
              <ProgressBar now={html} label={`${html}%`} />
            </div>
            <div className='progress-block'>
              <h4>Mobile App / Flutter</h4>
              <ProgressBar now={flutter} label={`${flutter}%`} />
            </div>
            <div className='progress-block'>
              <h4>SERVER / VPS</h4>
              <ProgressBar now={server} label={`${server}%`} />
            </div>
          </Col>
        </Row>
      </Container>
    </section>
  );
}

export default AppAbout;